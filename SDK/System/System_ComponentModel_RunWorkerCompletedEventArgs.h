#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_AsyncCompletedEventArgs.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct RunWorkerCompletedEventArgs : System::ComponentModel::AsyncCompletedEventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* result;
		void _ctor(mscorlib::System::Object* result, mscorlib::System::Exception* error, bool cancelled);
		mscorlib::System::Object* get_Result();
		mscorlib::System::Object* get_UserState();
	};
}

