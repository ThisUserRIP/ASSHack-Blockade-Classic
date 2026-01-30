#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net::Security { struct AsyncProtocolResult; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "Mono_Net_Security_AsyncOperationStatus.h"

namespace System::Mono::Net::Security
{
	struct AsyncProtocolRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField;
		bool _RunSynchronously_k__BackingField;
		int32_t _UserResult_k__BackingField;
		int32_t Started;
		int32_t RequestedSize;
		int32_t WriteRequested;
		mscorlib::System::Object* locker;
		System::Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
		bool get_RunSynchronously();
		mscorlib::System::String* get_Name();
		int32_t get_UserResult();
		void set_UserResult(int32_t value);
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);
		void RequestRead(int32_t size);
		void RequestWrite();
		mscorlib::System::Threading::Tasks::Task_1<System::Mono::Net::Security::AsyncProtocolResult>* StartOperation(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* ProcessOperation(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Nullable_1<mscorlib::System::Int32>>* InnerRead(mscorlib::System::Threading::CancellationToken cancellationToken);
		System::Mono::Net::Security::AsyncOperationStatus Run(System::Mono::Net::Security::AsyncOperationStatus status);
		mscorlib::System::String* ToString();
	};
}

