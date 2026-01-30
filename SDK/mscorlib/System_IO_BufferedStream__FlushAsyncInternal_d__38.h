#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_BufferedStream.h"
namespace mscorlib::System::IO { struct BufferedStream; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncTaskMethodBuilder; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace mscorlib::System::IO
{
	struct BufferedStream__FlushAsyncInternal_d__38
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		mscorlib::System::IO::BufferedStream* _this;
		int32_t writePos;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		int32_t readPos;
		int32_t readLen;
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Threading::SemaphoreSlim* _sem_5__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

