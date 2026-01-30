#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct WeakReference; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Windows { struct qBxJquMCjbjCovNTSnUsIuJOTGj; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Windows
{
	struct BQeAFlGvNdzPeGDyDzGeekrXkRYA : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime zHdeWmoPkWAgUWvItUklAhcgukg;
		mscorlib::System::WeakReference* ZJsyKvOHbHaISpwcYILtSZSrKau;
		mscorlib::System::String* sbQGBAKLurtYXKLPGxTXeGAiKKqX;
		void _ctor(mscorlib::System::DateTime creationTime, Rewired_Windows::qBxJquMCjbjCovNTSnUsIuJOTGj* comObject, mscorlib::System::String* stackTrace);
		mscorlib::System::DateTime get_CreationTime();
		void set_CreationTime(mscorlib::System::DateTime value);
		mscorlib::System::WeakReference* get_Object();
		void set_Object(mscorlib::System::WeakReference* value);
		mscorlib::System::String* get_StackTrace();
		void set_StackTrace(mscorlib::System::String* value);
		bool get_IsAlive();
		mscorlib::System::String* ToString();
	};
}

