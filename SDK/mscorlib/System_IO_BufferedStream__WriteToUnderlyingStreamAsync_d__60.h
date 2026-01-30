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
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace mscorlib::System::IO
{
	struct BufferedStream__WriteToUnderlyingStreamAsync_d__60
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		mscorlib::System::Threading::Tasks::Task* semaphoreLockTask;
		mscorlib::System::IO::BufferedStream* __4__this;
		int32_t count;
		IL2CPP::Array<uint8_t>* array;
		int32_t offset;
		bool useApmPattern;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		int32_t _totalUserBytes_5__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;
		mscorlib::System::IO::Stream* __7__wrap1;
		mscorlib::System::Object* __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

