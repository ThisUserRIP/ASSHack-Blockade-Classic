#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "BestHTTP_SignalR_MessageTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct FailureMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t _InvocationId_k__BackingField;
		bool _IsHubError_k__BackingField;
		mscorlib::System::String* _ErrorMessage_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* _AdditionalData_k__BackingField;
		mscorlib::System::String* _StackTrace_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* _State_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::MessageTypes BestHTTP_SignalR_Messages_IServerMessage_get_Type();
		uint64_t get_InvocationId();
		void set_InvocationId(uint64_t value);
		bool get_IsHubError();
		void set_IsHubError(bool value);
		mscorlib::System::String* get_ErrorMessage();
		void set_ErrorMessage(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_AdditionalData();
		void set_AdditionalData(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		mscorlib::System::String* get_StackTrace();
		void set_StackTrace(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_State();
		void set_State(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		void BestHTTP_SignalR_Messages_IServerMessage_Parse(mscorlib::System::Object* data);
		void _ctor();
	};
}

