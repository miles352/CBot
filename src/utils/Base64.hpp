#pragma once
#include <string>
#include <openssl/bio.h>
#include <openssl/buffer.h>
#include <openssl/evp.h>
#include <openssl/types.h>

namespace Base64
{
    /** Encodes data into a base64 string in url format, with no padding. */
    inline std::string encode_url_no_padding(const void* data, size_t size)
    {
        // Create a basic input output using memory
        BIO* mem = BIO_new(BIO_s_mem());
        // Create base64 filter
        BIO* b64 = BIO_new(BIO_f_base64());
        // Add the filter to the main BIO
        mem = BIO_push(b64, mem);
        BIO_set_flags(mem, BIO_FLAGS_BASE64_NO_NL);
        BIO_write(mem, data, size);
        BIO_flush(mem);

        BUF_MEM* mem_ptr;
        BIO_get_mem_ptr(mem, &mem_ptr);

        // Change to url format, + goes to - and / goes to _ and remove padding
        int len = mem_ptr->length;
        for (int i = 0; i < len; i++)
        {
            if (mem_ptr->data[i] == '+') mem_ptr->data[i] = '-';
            else if (mem_ptr->data[i] == '/') mem_ptr->data[i] = '_';
            else if (mem_ptr->data[i] == '=') mem_ptr->length--;
        }

        std::string output(mem_ptr->data, mem_ptr->length);

        BIO_free_all(mem);

        return output;
    }

    /** Encodes data into a normal base64 string. */
    inline std::string encode(const void* data, size_t size)
    {
        // Create a basic input output using memory
        BIO* mem = BIO_new(BIO_s_mem());
        // Create base64 filter
        BIO* b64 = BIO_new(BIO_f_base64());
        // Add the filter to the main BIO
        mem = BIO_push(b64, mem);
        BIO_set_flags(mem, BIO_FLAGS_BASE64_NO_NL);
        BIO_write(mem, data, size);
        BIO_flush(mem);

        BUF_MEM* mem_ptr;
        BIO_get_mem_ptr(mem, &mem_ptr);

        std::string output(mem_ptr->data, mem_ptr->length);

        BIO_free_all(mem);

        return output;
    }
}
