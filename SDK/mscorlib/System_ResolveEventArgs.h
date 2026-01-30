#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct ResolveEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		mscorlib::System::Reflection::Assembly* m_Requesting;
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, mscorlib::System::Reflection::Assembly* requestingAssembly);
	};
}

