#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueue; };
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueue_WorkStealingQueue; };
namespace mscorlib::System { struct Random_; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct ThreadPoolWorkQueueThreadLocals : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ThreadPoolWorkQueue* workQueue;
		mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* workStealingQueue;
		mscorlib::System::Random_* random;
		struct StaticFields
		{
			mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals* threadLocals;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Threading::ThreadPoolWorkQueue* tpq);
		void CleanUp();
		void Finalize();
	};
}

