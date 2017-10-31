﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/Platform.hpp>
# if defined(SIV3D_TARGET_LINUX)

# include <iostream>
# include <unistd.h>
# include "Siv3DEngine.hpp"

void Main();

int main()
{
	using namespace s3d;

	std::cout << "Siv3D for Linux\n";

	Siv3DEngine engine;

	Main();
}

# endif
