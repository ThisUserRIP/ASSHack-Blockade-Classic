#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_ExecutionContext.h"
namespace mscorlib::System::Threading { struct ExecutionContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
#include "System_Runtime_Remoting_Messaging_LogicalCallContext_Reader.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext_Reader; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct IAsyncLocal; };

namespace mscorlib::System::Threading
{
	struct ExecutionContext_Reader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ExecutionContext* m_ec;
		void _ctor(mscorlib::System::Threading::ExecutionContext* ec);
		mscorlib::System::Threading::ExecutionContext* DangerousGetRawExecutionContext();
		bool get_IsNull();
		bool IsDefaultFTContext(bool ignoreSyncCtx);
		bool get_IsFlowSuppressed();
		mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContext();
		mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader get_LogicalCallContext();
		mscorlib::System::Object* GetLocalValue(mscorlib::System::Threading::IAsyncLocal* local);
		bool HasSameLocalValues(mscorlib::System::Threading::ExecutionContext* other);
	};
}

