#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct EventHandler; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct EventArgs; };
namespace mscorlib::System { struct AggregateException; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskExceptionHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* m_task;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* m_faultExceptions;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException;
		bool m_isHandled;
		struct StaticFields
		{
			bool s_failFastOnUnobservedException;
			bool s_domainUnloadStarted;
			mscorlib::System::EventHandler* s_adUnloadEventHandler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Threading::Tasks::Task* task);
		static bool ShouldFailFastOnUnobservedException();
		static void EnsureADUnloadCallbackRegistered();
		static void AppDomainUnloadCallback(mscorlib::System::Object* sender, mscorlib::System::EventArgs* e);
		void Finalize();
		bool get_ContainsFaultList();
		void Add(mscorlib::System::Object* exceptionObject, bool representsCancellation);
		void SetCancellationException(mscorlib::System::Object* exceptionObject);
		void AddFaultException(mscorlib::System::Object* exceptionObject);
		void MarkAsUnhandled();
		void MarkAsHandled(bool calledFromFinalizer);
		mscorlib::System::AggregateException* CreateExceptionObject(bool calledFromFinalizer, mscorlib::System::Exception* includeThisException);
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* GetExceptionDispatchInfos();
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo();
		static void _cctor();
	};
}

