#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Component.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct AsyncOperation; };
namespace System::System::ComponentModel { struct BackgroundWorker_WorkerThreadStartDelegate; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct DoWorkEventHandler; };
namespace System::System::ComponentModel { struct DoWorkEventArgs; };
namespace System::System::ComponentModel { struct RunWorkerCompletedEventArgs; };
namespace System::System::ComponentModel { struct ProgressChangedEventArgs; };
namespace System::System::ComponentModel { struct ProgressChangedEventHandler; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::ComponentModel { struct RunWorkerCompletedEventHandler; };

namespace System::System::ComponentModel
{
	struct BackgroundWorker : System::ComponentModel::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool canCancelWorker;
		bool workerReportsProgress;
		bool cancellationPending;
		bool isRunning;
		System::ComponentModel::AsyncOperation* asyncOperation;
		System::ComponentModel::BackgroundWorker_WorkerThreadStartDelegate* threadStart;
		mscorlib::System::Threading::SendOrPostCallback* operationCompleted;
		mscorlib::System::Threading::SendOrPostCallback* progressReporter;
		struct StaticFields
		{
			mscorlib::System::Object* doWorkKey;
			mscorlib::System::Object* runWorkerCompletedKey;
			mscorlib::System::Object* progressChangedKey;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void AsyncOperationCompleted(mscorlib::System::Object* arg);
		bool get_CancellationPending();
		void CancelAsync();
		void add_DoWork(System::ComponentModel::DoWorkEventHandler* value);
		void remove_DoWork(System::ComponentModel::DoWorkEventHandler* value);
		bool get_IsBusy();
		void OnDoWork(System::ComponentModel::DoWorkEventArgs* e);
		void OnRunWorkerCompleted(System::ComponentModel::RunWorkerCompletedEventArgs* e);
		void OnProgressChanged(System::ComponentModel::ProgressChangedEventArgs* e);
		void add_ProgressChanged(System::ComponentModel::ProgressChangedEventHandler* value);
		void remove_ProgressChanged(System::ComponentModel::ProgressChangedEventHandler* value);
		void ProgressReporter(mscorlib::System::Object* arg);
		void ReportProgress(int32_t percentProgress);
		void ReportProgress(int32_t percentProgress, mscorlib::System::Object* userState);
		void RunWorkerAsync();
		void RunWorkerAsync(mscorlib::System::Object* argument);
		void add_RunWorkerCompleted(System::ComponentModel::RunWorkerCompletedEventHandler* value);
		void remove_RunWorkerCompleted(System::ComponentModel::RunWorkerCompletedEventHandler* value);
		bool get_WorkerReportsProgress();
		void set_WorkerReportsProgress(bool value);
		bool get_WorkerSupportsCancellation();
		void set_WorkerSupportsCancellation(bool value);
		void WorkerThreadStart(mscorlib::System::Object* argument);
		static void _cctor();
	};
}

