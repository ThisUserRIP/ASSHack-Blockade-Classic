#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct RefreshEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* componentChanged;
		mscorlib::System::Type* typeChanged;
		void _ctor(mscorlib::System::Object* componentChanged);
		void _ctor(mscorlib::System::Type* typeChanged);
		mscorlib::System::Object* get_ComponentChanged();
		mscorlib::System::Type* get_TypeChanged();
	};
}

