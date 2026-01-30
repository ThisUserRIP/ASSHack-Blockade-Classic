#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct IEncoder; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
#include "BestHTTP_SignalRCore_TransferModes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct JsonProtocol : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* _Encoder_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* _Connection_k__BackingField;
		struct StaticFields
		{
			wchar_t Separator;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::BestHTTP::SignalRCore::TransferModes get_Type();
		Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* get_Encoder();
		void set_Encoder(Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* value);
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* get_Connection();
		void set_Connection(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* value);
		void _ctor(Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* encoder);
		void ParseMessages(mscorlib::System::String* data, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>& messages);
		void ParseMessages(IL2CPP::Array<uint8_t>* data, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>& messages);
		IL2CPP::Array<uint8_t>* EncodeMessage(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
		IL2CPP::Array<mscorlib::System::Object*>* GetRealArguments(IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* arguments);
		mscorlib::System::Object* ConvertTo(mscorlib::System::Type* toType, mscorlib::System::Object* obj);
		static IL2CPP::Array<uint8_t>* WithSeparator(mscorlib::System::String* str);
	};
}

