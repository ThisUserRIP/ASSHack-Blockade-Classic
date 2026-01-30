#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Threading_ThreadState.h"
namespace mscorlib::System { struct Object; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UIntPtr.h"
namespace mscorlib::System { struct UIntPtr; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct InternalThread : mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t lock_thread_id;
		intptr_t handle;
		intptr_t native_handle;
		intptr_t unused3;
		intptr_t name;
		int32_t name_len;
		mscorlib::System::Threading::ThreadState state;
		mscorlib::System::Object* abort_exc;
		int32_t abort_state_handle;
		int64_t thread_id;
		intptr_t debugger_thread;
		uintptr_t static_data;
		intptr_t runtime_thread_info;
		mscorlib::System::Object* current_appcontext;
		mscorlib::System::Object* root_domain_thread;
		IL2CPP::Array<uint8_t>* _serialized_principal;
		int32_t _serialized_principal_version;
		intptr_t appdomain_refs;
		int32_t interruption_requested;
		intptr_t synch_cs;
		bool threadpool_thread;
		bool thread_interrupt_requested;
		int32_t stack_size;
		uint8_t apartment_state;
		int32_t critical_region_level;
		int32_t managed_id;
		int32_t small_id;
		intptr_t manage_callback;
		intptr_t unused4;
		intptr_t flags;
		intptr_t thread_pinning_ref;
		intptr_t abort_protected_block_count;
		int32_t priority;
		intptr_t owned_mutex;
		intptr_t suspended_event;
		int32_t self_suspended;
		intptr_t unused1;
		intptr_t unused2;
		intptr_t last;
		void Thread_free_internal();
		void Finalize();
		void _ctor();
	};
}

