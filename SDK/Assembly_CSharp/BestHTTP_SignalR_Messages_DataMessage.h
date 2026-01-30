#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SignalR_MessageTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct DataMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _Data_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::MessageTypes BestHTTP_SignalR_Messages_IServerMessage_get_Type();
		mscorlib::System::Object* get_Data();
		void set_Data(mscorlib::System::Object* value);
		void BestHTTP_SignalR_Messages_IServerMessage_Parse(mscorlib::System::Object* data);
		void _ctor();
	};
}

