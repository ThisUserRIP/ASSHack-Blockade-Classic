#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_SynchronizationContext.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::System::Threading
{
	struct OSSpecificSynchronizationContext : mscorlib::System::Threading::SynchronizationContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_OSSynchronizationContext;
		struct StaticFields
		{
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Threading::OSSpecificSynchronizationContext>* s_ContextCache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Object* osContext);
		static mscorlib::System::Threading::OSSpecificSynchronizationContext* Get();
		mscorlib::System::Threading::SynchronizationContext* CreateCopy();
		void Send(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state);
		void Post(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state);
		static void InvocationEntry(intptr_t arg);
		static mscorlib::System::Object* GetOSContext();
		static void PostInternal(mscorlib::System::Object* osSynchronizationContext, intptr_t callback, intptr_t arg);
		static void _cctor();
	};
}

