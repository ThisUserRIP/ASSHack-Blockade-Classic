#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct IHeartbeat; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct HeartbeatManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::IHeartbeat>* Heartbeats;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::Extensions::IHeartbeat*>* UpdateArray;
		mscorlib::System::DateTime LastUpdate;
		void Subscribe(Assembly_CSharp::BestHTTP::Extensions::IHeartbeat* heartbeat);
		void Unsubscribe(Assembly_CSharp::BestHTTP::Extensions::IHeartbeat* heartbeat);
		void Update();
		void _ctor();
	};
}

