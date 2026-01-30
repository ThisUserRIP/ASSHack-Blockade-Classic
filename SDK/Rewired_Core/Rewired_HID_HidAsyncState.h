#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct HidAsyncState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* oSEeQmWRZNtYeDdyhSLonSWzsMJ;
		mscorlib::System::Object* KZghajOHXWiPVofxGAKZpgyMQMs;
		void _ctor(mscorlib::System::Object* callerDelegate, mscorlib::System::Object* callbackDelegate);
		mscorlib::System::Object* get_CallerDelegate();
		mscorlib::System::Object* get_CallbackDelegate();
	};
}

