#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "System_IO_Stream_ReadWriteParameters.h"
namespace mscorlib::System::IO { struct Stream_ReadWriteParameters; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4, typename TResult> struct Func_5; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "System_Threading_Tasks_VoidTaskResult.h"
namespace mscorlib::System::Threading::Tasks { struct VoidTaskResult; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct Stream___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::IO::Stream___c* __9;
			mscorlib::System::Func_1<mscorlib::System::Threading::SemaphoreSlim>* __9__4_0;
			mscorlib::System::Action_1<mscorlib::System::Object>* __9__36_0;
			mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Int32>* __9__39_0;
			mscorlib::System::Func_5<mscorlib::System::IO::Stream, mscorlib::System::IO::Stream_ReadWriteParameters, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* __9__43_0;
			mscorlib::System::Func_3<mscorlib::System::IO::Stream, mscorlib::System::IAsyncResult, mscorlib::System::Int32>* __9__43_1;
			mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Int32>* __9__46_0;
			mscorlib::System::Action_2<mscorlib::System::Threading::Tasks::Task, mscorlib::System::Object>* __9__47_0;
			mscorlib::System::Func_5<mscorlib::System::IO::Stream, mscorlib::System::IO::Stream_ReadWriteParameters, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* __9__53_0;
			mscorlib::System::Func_3<mscorlib::System::IO::Stream, mscorlib::System::IAsyncResult, mscorlib::System::Threading::Tasks::VoidTaskResult>* __9__53_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::Threading::SemaphoreSlim* _EnsureAsyncActiveSemaphoreInitialized_b__4_0();
		void _FlushAsync_b__36_0(mscorlib::System::Object* state);
		int32_t _BeginReadInternal_b__39_0(mscorlib::System::Object* _p0_);
		mscorlib::System::IAsyncResult* _BeginEndReadAsync_b__43_0(mscorlib::System::IO::Stream* stream, mscorlib::System::IO::Stream_ReadWriteParameters args, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t _BeginEndReadAsync_b__43_1(mscorlib::System::IO::Stream* stream, mscorlib::System::IAsyncResult* asyncResult);
		int32_t _BeginWriteInternal_b__46_0(mscorlib::System::Object* _p0_);
		void _RunReadWriteTaskWhenReady_b__47_0(mscorlib::System::Threading::Tasks::Task* t, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* _BeginEndWriteAsync_b__53_0(mscorlib::System::IO::Stream* stream, mscorlib::System::IO::Stream_ReadWriteParameters args, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__53_1(mscorlib::System::IO::Stream* stream, mscorlib::System::IAsyncResult* asyncResult);
	};
}

