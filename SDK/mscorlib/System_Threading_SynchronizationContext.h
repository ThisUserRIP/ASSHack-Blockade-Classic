#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_SynchronizationContextProperties.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Threading
{
	struct SynchronizationContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SynchronizationContextProperties _props;
		struct StaticFields
		{
			mscorlib::System::Type* s_cachedPreparedType1;
			mscorlib::System::Type* s_cachedPreparedType2;
			mscorlib::System::Type* s_cachedPreparedType3;
			mscorlib::System::Type* s_cachedPreparedType4;
			mscorlib::System::Type* s_cachedPreparedType5;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Send(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state);
		void Post(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state);
		void OperationStarted();
		void OperationCompleted();
		static void SetSynchronizationContext(mscorlib::System::Threading::SynchronizationContext* syncContext);
		static mscorlib::System::Threading::SynchronizationContext* get_Current();
		static mscorlib::System::Threading::SynchronizationContext* get_CurrentNoFlow();
		static mscorlib::System::Threading::SynchronizationContext* GetThreadLocalContext();
		mscorlib::System::Threading::SynchronizationContext* CreateCopy();
	};
}

