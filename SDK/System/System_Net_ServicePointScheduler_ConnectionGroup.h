#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_ServicePointScheduler.h"
namespace System::System::Net { struct ServicePointScheduler; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct WebConnection; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedList_1; };
namespace System::System::Net { struct WebOperation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };

namespace System::System::Net
{
	struct ServicePointScheduler_ConnectionGroup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::ServicePointScheduler* _Scheduler_k__BackingField;
		mscorlib::System::String* _Name_k__BackingField;
		int32_t ID;
		System::Collections::Generic::LinkedList_1<System::Net::WebConnection>* connections;
		System::Collections::Generic::LinkedList_1<System::Net::WebOperation>* queue;
		struct StaticFields
		{
			int32_t nextId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::Net::ServicePointScheduler* get_Scheduler();
		void _ctor(System::Net::ServicePointScheduler* scheduler, mscorlib::System::String* name);
		bool IsEmpty();
		void RemoveConnection(System::Net::WebConnection* connection);
		void Cleanup();
		void EnqueueOperation(System::Net::WebOperation* operation);
		System::Net::WebOperation* GetNextOperation();
		System::Net::WebConnection* FindIdleConnection(System::Net::WebOperation* operation);
		mscorlib::System::ValueTuple_2<System::Net::WebConnection, mscorlib::System::Boolean> CreateOrReuseConnection(System::Net::WebOperation* operation, bool force);
	};
}

