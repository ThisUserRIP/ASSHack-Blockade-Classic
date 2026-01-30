#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_AsyncProtocolRequest.h"
namespace System::Mono::Net::Security { struct AsyncProtocolRequest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncTaskMethodBuilder; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "Mono_Net_Security_AsyncOperationStatus.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::Mono::Net::Security
{
	struct AsyncProtocolRequest__ProcessOperation_d__24
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		System::Mono::Net::Security::AsyncProtocolRequest* __4__this;
		System::Mono::Net::Security::AsyncOperationStatus _status_5__1;
		System::Mono::Net::Security::AsyncOperationStatus _newStatus_5__2;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Nullable_1<mscorlib::System::Int32>> __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

