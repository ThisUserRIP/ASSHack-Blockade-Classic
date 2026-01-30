#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CallContextRemotingData; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CallContextSecurityData; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct Header; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct LogicalCallContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* m_Datastore;
		mscorlib::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;
		mscorlib::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;
		mscorlib::System::Object* m_HostContext;
		bool m_IsCorrelationMgr;
		IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* _sendHeaders;
		IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* _recvHeaders;
		struct StaticFields
		{
			mscorlib::System::Type* s_callContextType;
			mscorlib::System::String* s_CorrelationMgrSlotName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* Clone();
		void Merge(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* lc);
		bool get_HasInfo();
		bool get_HasUserData();
		mscorlib::System::Collections::Hashtable* get_Datastore();
		static void _cctor();
	};
}

