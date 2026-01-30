#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "BestHTTP_SignalR_MessageTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct MultiMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _MessageId_k__BackingField;
		bool _IsInitialization_k__BackingField;
		mscorlib::System::String* _GroupsToken_k__BackingField;
		bool _ShouldReconnect_k__BackingField;
		mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> _PollDelay_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage>* _Data_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::MessageTypes BestHTTP_SignalR_Messages_IServerMessage_get_Type();
		mscorlib::System::String* get_MessageId();
		void set_MessageId(mscorlib::System::String* value);
		bool get_IsInitialization();
		void set_IsInitialization(bool value);
		mscorlib::System::String* get_GroupsToken();
		void set_GroupsToken(mscorlib::System::String* value);
		bool get_ShouldReconnect();
		void set_ShouldReconnect(bool value);
		mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> get_PollDelay();
		void set_PollDelay(mscorlib::System::Nullable_1<mscorlib::System::TimeSpan> value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage>* get_Data();
		void set_Data(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage>* value);
		void BestHTTP_SignalR_Messages_IServerMessage_Parse(mscorlib::System::Object* data);
		void _ctor();
	};
}

