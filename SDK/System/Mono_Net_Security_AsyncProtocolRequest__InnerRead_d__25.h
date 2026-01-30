#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_AsyncProtocolRequest.h"
namespace System::Mono::Net::Security { struct AsyncProtocolRequest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::Mono::Net::Security
{
	struct AsyncProtocolRequest__InnerRead_d__25
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Nullable_1<mscorlib::System::Int32>> __t__builder;
		System::Mono::Net::Security::AsyncProtocolRequest* __4__this;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		int32_t _requestedSize_5__1;
		mscorlib::System::Nullable_1<mscorlib::System::Int32> _totalRead_5__2;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Int32> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

