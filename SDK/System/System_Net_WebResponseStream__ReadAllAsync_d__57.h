#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebResponseStream.h"
namespace System::System::Net { struct WebResponseStream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncTaskMethodBuilder; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace System::System::Net { struct WebCompletionSource; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct MemoryStream; };
namespace System::System::Net { struct BufferOffsetSize; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Runtime_CompilerServices_TaskAwaiter_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct TaskAwaiter_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::System::Net
{
	struct WebResponseStream__ReadAllAsync_d__57
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		System::Net::WebResponseStream* __4__this;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		System::Net::WebCompletionSource* _completion_5__1;
		mscorlib::System::Threading::Tasks::Task* _timeoutTask_5__2;
		bool resending;
		mscorlib::System::IO::MemoryStream* _ms_5__3;
		System::Net::BufferOffsetSize* _buffer_5__4;
		int32_t _read_5__5;
		IL2CPP::Array<uint8_t>* _b_5__6;
		int32_t _remaining_5__7;
		int32_t _readSize_5__8;
		int32_t _new_size_5__9;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Threading::Tasks::Task> __u__1;
		mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<mscorlib::System::Int32> __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

