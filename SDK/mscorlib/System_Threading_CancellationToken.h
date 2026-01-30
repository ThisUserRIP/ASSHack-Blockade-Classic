#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Threading { struct CancellationTokenSource; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_CancellationTokenRegistration.h"
namespace mscorlib::System::Threading { struct CancellationTokenRegistration; };
namespace mscorlib::System { struct Action; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Threading
{
	struct CancellationToken
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::CancellationTokenSource* m_source;
		static mscorlib::System::Threading::CancellationToken get_None();
		bool get_IsCancellationRequested();
		bool get_CanBeCanceled();
		void _ctor(mscorlib::System::Threading::CancellationTokenSource* source);
		static void ActionToActionObjShunt(mscorlib::System::Object* obj);
		mscorlib::System::Threading::CancellationTokenRegistration Register(mscorlib::System::Action* callback);
		mscorlib::System::Threading::CancellationTokenRegistration Register(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* state);
		mscorlib::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* state);
		mscorlib::System::Threading::CancellationTokenRegistration Register(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* state, bool useSynchronizationContext, bool useExecutionContext);
		bool Equals(mscorlib::System::Threading::CancellationToken other);
		bool Equals(mscorlib::System::Object* other);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Threading::CancellationToken left, mscorlib::System::Threading::CancellationToken right);
		static bool op_Inequality(mscorlib::System::Threading::CancellationToken left, mscorlib::System::Threading::CancellationToken right);
		void ThrowIfCancellationRequested();
		void ThrowIfSourceDisposed();
		void ThrowOperationCanceledException();
		static void ThrowObjectDisposedException();
		static void _cctor();
	};
	bool operator==(mscorlib::System::Threading::CancellationToken& left, mscorlib::System::Threading::CancellationToken& right);
	bool operator!=(mscorlib::System::Threading::CancellationToken& left, mscorlib::System::Threading::CancellationToken& right);
}

