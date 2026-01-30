#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_Tasks_CausalityTraceLevel.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Threading_Tasks_AsyncCausalityStatus.h"
#include "System_Threading_Tasks_CausalityRelation.h"
#include "System_Threading_Tasks_CausalitySynchronousWork.h"

namespace mscorlib::System::Threading::Tasks
{
	struct AsyncCausalityTracer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_LoggingOn();
		static void TraceOperationCreation(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::String* operationName, uint64_t relatedContext);
		static void TraceOperationCompletion(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::AsyncCausalityStatus status);
		static void TraceOperationRelation(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::CausalityRelation relation);
		static void TraceSynchronousWorkStart(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::CausalitySynchronousWork work);
		static void TraceSynchronousWorkCompletion(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, mscorlib::System::Threading::Tasks::CausalitySynchronousWork work);
	};
}

