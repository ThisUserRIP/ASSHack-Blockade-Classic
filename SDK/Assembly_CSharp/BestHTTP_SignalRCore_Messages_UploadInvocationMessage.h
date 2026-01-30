#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalRCore_Messages_MessageTypes.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	struct UploadInvocationMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes type;
		mscorlib::System::String* invocationId;
		bool nonblocking;
		mscorlib::System::String* target;
		IL2CPP::Array<mscorlib::System::Object*>* arguments;
		IL2CPP::Array<int32_t>* streamIds;
	};
}

