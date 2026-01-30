#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Timer.h"
namespace mscorlib::System::Threading { struct Timer; };
namespace mscorlib::System::Collections { struct SortedList; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace mscorlib::System::Threading
{
	struct Timer_Scheduler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::SortedList* list;
		mscorlib::System::Threading::ManualResetEvent* changed;
		struct StaticFields
		{
			mscorlib::System::Threading::Timer_Scheduler* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::Threading::Timer_Scheduler* get_Instance();
		void _ctor();
		void Remove(mscorlib::System::Threading::Timer* timer);
		void Change(mscorlib::System::Threading::Timer* timer, int64_t new_next_run);
		int32_t FindByDueTime(int64_t nr);
		void Add(mscorlib::System::Threading::Timer* timer);
		int32_t InternalRemove(mscorlib::System::Threading::Timer* timer);
		static void TimerCB(mscorlib::System::Object* o);
		void SchedulerThread();
		void ShrinkIfNeeded(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Threading::Timer>* list, int32_t initial);
	};
}

