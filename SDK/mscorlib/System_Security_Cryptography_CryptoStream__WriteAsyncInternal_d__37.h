#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_CryptoStream.h"
namespace mscorlib::System::Security::Cryptography { struct CryptoStream; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncTaskMethodBuilder; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Security_Cryptography_CryptoStream_HopToThreadPoolAwaitable.h"
namespace mscorlib::System::Security::Cryptography { struct CryptoStream_HopToThreadPoolAwaitable; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoStream__WriteAsyncInternal_d__37
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		mscorlib::System::Security::Cryptography::CryptoStream* __4__this;
		int32_t count;
		int32_t offset;
		IL2CPP::Array<uint8_t>* buffer;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		int32_t _bytesToWrite_5__1;
		int32_t _currentInputIndex_5__2;
		int32_t _numWholeBlocksInBytes_5__3;
		mscorlib::System::Threading::SemaphoreSlim* _sem_5__4;
		mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

