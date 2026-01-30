#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_MobileAuthenticatedStream.h"
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "Mono_Net_Security_MobileAuthenticatedStream_OperationType.h"
namespace System::Mono::Net::Security { struct AsyncProtocolRequest; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace System::Mono::Net::Security { struct AsyncProtocolResult; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::Mono::Net::Security
{
	struct MobileAuthenticatedStream__StartOperation_d__58
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Int32> __t__builder;
		System::Mono::Net::Security::MobileAuthenticatedStream* __4__this;
		System::Mono::Net::Security::MobileAuthenticatedStream_OperationType type;
		System::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<System::Mono::Net::Security::AsyncProtocolResult> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

