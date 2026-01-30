#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct WaitCallback; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Threading { struct ThreadAbortException; };

namespace mscorlib::System::Threading
{
	struct QueueUserWorkItemCallback : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::WaitCallback* callback;
		mscorlib::System::Threading::ExecutionContext* context;
		mscorlib::System::Object* state;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* ccb;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(mscorlib::System::Threading::WaitCallback* waitCallback, mscorlib::System::Object* stateObj, bool compressStack, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
		static void WaitCallback_Context(mscorlib::System::Object* state);
	};
}

