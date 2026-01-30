#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Exception.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct UpaException : mscorlib::System::Exception
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* particle1;
		mscorlib::System::Object* particle2;
		void _ctor(mscorlib::System::Object* particle1, mscorlib::System::Object* particle2);
		mscorlib::System::Object* get_Particle1();
		mscorlib::System::Object* get_Particle2();
	};
}

