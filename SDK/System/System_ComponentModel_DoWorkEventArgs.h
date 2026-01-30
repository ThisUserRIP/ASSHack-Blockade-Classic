#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_CancelEventArgs.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct DoWorkEventArgs : System::ComponentModel::CancelEventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* result;
		mscorlib::System::Object* argument;
		void _ctor(mscorlib::System::Object* argument);
		mscorlib::System::Object* get_Argument();
		mscorlib::System::Object* get_Result();
		void set_Result(mscorlib::System::Object* value);
	};
}

