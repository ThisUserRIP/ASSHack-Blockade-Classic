#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CallContextRemotingData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _logicalCallID;
		mscorlib::System::String* get_LogicalCallID();
		void set_LogicalCallID(mscorlib::System::String* value);
		bool get_HasInfo();
		mscorlib::System::Object* Clone();
		void _ctor();
	};
}

