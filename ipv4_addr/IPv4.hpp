#pragma once

#include <iostream>
#include <array>
#include <string>
#include <sstream>

namespace ADDR {

    typedef unsigned char uc;
    typedef unsigned long ul;

    class IPv4 {
            std::array<uc, 4> data;

        public :
            constexpr IPv4()
            :data {{0}} {};
            constexpr IPv4(const uc  a, const uc b, const uc c, const uc d)
            : data{{ a, b, c, d }}{}
            explicit constexpr IPv4(ul a)
            : data {{
                static_cast<uc>((a >> 24) & 0xFF),
                static_cast<uc>((a >> 16) & 0xFF),
                static_cast<uc>((a >> 8) & 0xFF),
                static_cast<uc>(a & 0xFF)
            }}{}
            IPv4(const IPv4& other) noexcept
            : data(other.data) {}
            IPv4& operator=(const IPv4& other) noexcept {
                if(this != &other){
                    data = other.data;
                }
                return (*this);
            }
            std::string to_string(void) const {
                std::stringstream ss;
                ss << *this;
                return (ss.str());
            }
            constexpr ul to_ulong(void) const noexcept {
                return ((static_cast<ul>(data[0]) << 24) |
                        (static_cast<ul>(data[1]) << 16) |
                        (static_cast<ul>(data[2]) <<  8) |
                        (static_cast<ul>(data[3])));
            }
            friend std::ostream& operator<<(std::ostream& os, const IPv4& a){
                os <<  static_cast<int>(a.data[0]) << '.'
                    << static_cast<int>(a.data[1]) << '.'
                    << static_cast<int>(a.data[2]) << '.'
                    << static_cast<int>(a.data[3]);
                return(os);
            }
            friend std::istream& operator>>(std::istream& is, IPv4& a) {
                char d1, d2, d3;
                int b1, b2, b3, b4;

                is >> b1 >> d1 >> b2 >> d2 >> b3 >> d3 >> b4;
                if(d1 == '.' && d2 == '.' && d3 == '.') {
                    a = IPv4(b1, b2, b3, b4);
                } else {
                    is.setstate(std::ios_base::failbit);
                }
                return (is);
            }
    };
} // end namespace
