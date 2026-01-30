#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_CompilerServices_CompilationRelaxations.h"

namespace mscorlib::System::Runtime::CompilerServices
{
	struct CompilationRelaxationsAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_relaxations;
		void _ctor(int32_t relaxations);
		void _ctor(mscorlib::System::Runtime::CompilerServices::CompilationRelaxations relaxations);
		int32_t get_CompilationRelaxations();
	};
}

