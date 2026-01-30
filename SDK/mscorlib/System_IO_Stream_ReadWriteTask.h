#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Threading_Tasks_Task_1.h"
#include "System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System::Threading::Tasks { struct Task; };

namespace mscorlib::System::IO
{
	struct Stream_ReadWriteTask : mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isRead;
		mscorlib::System::IO::Stream* _stream;
		IL2CPP::Array<uint8_t>* _buffer;
		int32_t _offset;
		int32_t _count;
		mscorlib::System::AsyncCallback* _callback;
		mscorlib::System::Threading::ExecutionContext* _context;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* s_invokeAsyncCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void ClearBeginState();
		void _ctor(bool isRead, mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Int32>* function, mscorlib::System::Object* state, mscorlib::System::IO::Stream* stream, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback);
		static void InvokeAsyncCallback(mscorlib::System::Object* completedTask);
		void System_Threading_Tasks_ITaskCompletionAction_Invoke(mscorlib::System::Threading::Tasks::Task* completingTask);
	};
}

