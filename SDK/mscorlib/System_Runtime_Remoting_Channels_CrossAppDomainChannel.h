#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct CrossAppDomainChannel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* s_lock;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RegisterCrossAppDomainChannel();
		mscorlib::System::String* get_ChannelName();
		int32_t get_ChannelPriority();
		mscorlib::System::Object* get_ChannelData();
		void StartListening(mscorlib::System::Object* data);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(mscorlib::System::String* url, mscorlib::System::Object* data, mscorlib::System::String& uri);
		void _ctor();
		static void _cctor();
	};
}

