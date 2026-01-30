#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct ServicePoint; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct ServicePointScheduler_AsyncManualResetEvent; };
namespace System::System::Net { struct ServicePointScheduler_ConnectionGroup; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System::System::Net { struct WebOperation; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedList_1; };
namespace System::System::Net { struct WebConnection; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_ValueTuple_3.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct ValueTuple_3; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct ServicePointScheduler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::ServicePoint* _ServicePoint_k__BackingField;
		int32_t running;
		int32_t maxIdleTime;
		System::Net::ServicePointScheduler_AsyncManualResetEvent* schedulerEvent;
		System::Net::ServicePointScheduler_ConnectionGroup* defaultGroup;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System::Net::ServicePointScheduler_ConnectionGroup>* groups;
		System::Collections::Generic::LinkedList_1<mscorlib::System::ValueTuple_2<System::Net::ServicePointScheduler_ConnectionGroup, System::Net::WebOperation>>* operations;
		System::Collections::Generic::LinkedList_1<mscorlib::System::ValueTuple_3<System::Net::ServicePointScheduler_ConnectionGroup, System::Net::WebConnection, mscorlib::System::Threading::Tasks::Task>>* idleConnections;
		int32_t currentConnections;
		int32_t connectionLimit;
		mscorlib::System::DateTime idleSince;
		int32_t ID;
		struct StaticFields
		{
			int32_t nextId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::Net::ServicePoint* get_ServicePoint();
		int32_t get_MaxIdleTime();
		int32_t get_ConnectionLimit();
		void _ctor(System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime);
		void Run();
		void StartScheduler();
		void Cleanup();
		void RunSchedulerIteration();
		bool OperationCompleted(System::Net::ServicePointScheduler_ConnectionGroup* group, System::Net::WebOperation* operation, mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Boolean, System::Net::WebOperation>>* task);
		void CloseIdleConnection(System::Net::ServicePointScheduler_ConnectionGroup* group, System::Net::WebConnection* connection);
		bool SchedulerIteration(System::Net::ServicePointScheduler_ConnectionGroup* group);
		void RemoveOperation(System::Net::WebOperation* operation);
		void RemoveIdleConnection(System::Net::WebConnection* connection);
		void SendRequest(System::Net::WebOperation* operation, mscorlib::System::String* groupName);
		System::Net::ServicePointScheduler_ConnectionGroup* GetConnectionGroup(mscorlib::System::String* name);
		void OnConnectionCreated(System::Net::WebConnection* connection);
		void OnConnectionClosed(System::Net::WebConnection* connection);
	};
}

