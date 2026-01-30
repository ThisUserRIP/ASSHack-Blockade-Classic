#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct ISynchronizeInvoke
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_InvokeRequired();
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::Delegate* method, IL2CPP::Array<mscorlib::System::Object*>* args);
		mscorlib::System::Object* EndInvoke(mscorlib::System::IAsyncResult* result);
		mscorlib::System::Object* Invoke(mscorlib::System::Delegate* method, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

