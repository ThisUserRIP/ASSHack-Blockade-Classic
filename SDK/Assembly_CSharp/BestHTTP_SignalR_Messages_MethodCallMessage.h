#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "BestHTTP_SignalR_MessageTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct MethodCallMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Hub_k__BackingField;
		mscorlib::System::String* _Method_k__BackingField;
		IL2CPP::Array<mscorlib::System::Object*>* _Arguments_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* _State_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::MessageTypes BestHTTP_SignalR_Messages_IServerMessage_get_Type();
		mscorlib::System::String* get_Hub();
		void set_Hub(mscorlib::System::String* value);
		mscorlib::System::String* get_Method();
		void set_Method(mscorlib::System::String* value);
		IL2CPP::Array<mscorlib::System::Object*>* get_Arguments();
		void set_Arguments(IL2CPP::Array<mscorlib::System::Object*>* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_State();
		void set_State(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		void BestHTTP_SignalR_Messages_IServerMessage_Parse(mscorlib::System::Object* data);
		void _ctor();
	};
}

