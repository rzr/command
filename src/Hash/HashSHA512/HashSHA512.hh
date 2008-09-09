/*
	This file is part of the metalink program
	Copyright (C) 2008  A. Bram Neijt <bneijt@gmail.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/



#ifndef _HashSHA512_HH_INCLUDED_
#define	_HashSHA512_HH_INCLUDED_

#include "../GCrypt/GCrypt.hh"
namespace bneijt
{
class HashSHA512: public GCrypt
{
	public:
		HashSHA512()
			:
			GCrypt(GCRY_MD_SHA512)
		{}

		static void from(char const *data, unsigned len, unsigned char* key)
		{
			gcry_md_hash_buffer(GCRY_MD_SHA512, key, data, len);
		}
};
}//namespace
#endif

