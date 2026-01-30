#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_CryptoStream.h"
namespace mscorlib::System::Security::Cryptography { struct CryptoStream; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Security_Cryptography_CryptoStream_HopToThreadPoolAwaitable.h"
namespace mscorlib::System::Security::Cryptography { struct CryptoStream_HopToThreadPoolAwaitable; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoStream__ReadAsyncInternal_d__34
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Int32> __t__builder;
		mscorlib::System::Security::Cryptography::CryptoStream* __4__this;
		int32_t count;
		int32_t offset;
		IL2CPP::Array<uint8_t>* buffer;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		IL2CPP::Array<uint8_t>* _tempInputBuffer_5__1;
		int32_t _currentOutputIndex_5__2;
		int32_t _bytesToDeliver_5__3;
		mscorlib::System::Threading::SemaphoreSlim* _sem_5__4;
		mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
		int32_t __7__wrap1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Int32> __u__3;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

