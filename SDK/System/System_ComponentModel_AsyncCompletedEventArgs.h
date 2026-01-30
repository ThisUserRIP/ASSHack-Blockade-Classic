#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct AsyncCompletedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* error;
		bool cancelled;
		mscorlib::System::Object* userState;
		void _ctor();
		void _ctor(mscorlib::System::Exception* error, bool cancelled, mscorlib::System::Object* userState);
		bool get_Cancelled();
		mscorlib::System::Exception* get_Error();
		mscorlib::System::Object* get_UserState();
		void RaiseExceptionIfNecessary();
	};
}

