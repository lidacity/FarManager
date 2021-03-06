﻿/*
testing.cpp

Testing framework wrapper

*/
/*
Copyright © 2019 Far Group
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the authors may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifdef ENABLE_TESTS

#define CATCH_CONFIG_RUNNER

// Self:
#include "testing.hpp"

// Internal:
#include "components.hpp"

// Platform:
#include "platform.memory.hpp"

// Common:

// External:
#include "format.hpp"

//----------------------------------------------------------------------------

int testing_main()
{
	int Argc;
	const os::memory::local::ptr Argv(CommandLineToArgvW(GetCommandLine(), &Argc));
	const auto Data = Argv.get();

	std::vector<const wchar_t*> Args;
	Args.reserve(Argc - 1);
	Args.push_back(*Data);
	Args.insert(Args.end(), &Data[2], &Data[Argc]);

	return Catch::Session().run(Argc - 1, Args.data());
}

namespace
{
	SCOPED_ACTION(components::component)([]
	{
		return components::component::info{ L"Catch2"sv, format(L"{0}.{1}.{2}"sv, CATCH_VERSION_MAJOR, CATCH_VERSION_MINOR, CATCH_VERSION_PATCH) };
	});
}

#endif
