#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct DownloadHandler; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UploadHandler; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct CertificateHandler; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Networking_UnityWebRequest_UnityWebRequestError.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequestAsyncOperation; };
#include "UnityEngine_Networking_UnityWebRequest_UnityWebRequestMethod.h"
#include "UnityEngine_Networking_UnityWebRequest_Result.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct UnityWebRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* m_DownloadHandler;
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* m_UploadHandler;
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::CertificateHandler* m_CertificateHandler;
		System::System::Uri* m_Uri;
		bool _disposeCertificateHandlerOnDispose_k__BackingField;
		bool _disposeDownloadHandlerOnDispose_k__BackingField;
		bool _disposeUploadHandlerOnDispose_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::String* kHttpVerbGET;
			mscorlib::System::String* kHttpVerbHEAD;
			mscorlib::System::String* kHttpVerbPOST;
			mscorlib::System::String* kHttpVerbPUT;
			mscorlib::System::String* kHttpVerbCREATE;
			mscorlib::System::String* kHttpVerbDELETE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetWebErrorString(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err);
		static mscorlib::System::String* GetHTTPStatusString(int64_t responseCode);
		bool get_disposeCertificateHandlerOnDispose();
		void set_disposeCertificateHandlerOnDispose(bool value);
		bool get_disposeDownloadHandlerOnDispose();
		void set_disposeDownloadHandlerOnDispose(bool value);
		bool get_disposeUploadHandlerOnDispose();
		void set_disposeUploadHandlerOnDispose(bool value);
		static intptr_t Create();
		void Release();
		void InternalDestroy();
		void InternalSetDefaults();
		void _ctor(mscorlib::System::String* url, mscorlib::System::String* method);
		void _ctor(mscorlib::System::String* url, mscorlib::System::String* method, UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* downloadHandler, UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* uploadHandler);
		void Finalize();
		void Dispose();
		void DisposeHandlers();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest();
		void Abort();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetMethod(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType);
		void InternalSetMethod(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetCustomMethod(mscorlib::System::String* customMethodName);
		void InternalSetCustomMethod(mscorlib::System::String* customMethodName);
		void set_method(mscorlib::System::String* value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError GetError();
		mscorlib::System::String* get_error();
		mscorlib::System::String* get_url();
		void set_url(mscorlib::System::String* value);
		mscorlib::System::String* GetUrl();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUrl(mscorlib::System::String* url);
		void InternalSetUrl(mscorlib::System::String* url);
		int64_t get_responseCode();
		bool IsExecuting();
		bool get_isModifiable();
		bool get_isDone();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result get_result();
		float GetDownloadProgress();
		float get_downloadProgress();
		uint64_t get_downloadedBytes();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetChunked(bool chunked);
		void set_chunkedTransfer(bool value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError InternalSetRequestHeader(mscorlib::System::String* name, mscorlib::System::String* value);
		void SetRequestHeader(mscorlib::System::String* name, mscorlib::System::String* value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUploadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* uh);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* get_uploadHandler();
		void set_uploadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetDownloadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* dh);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* get_downloadHandler();
		void set_downloadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* value);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::CertificateHandler* get_certificateHandler();
		static UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Get(mscorlib::System::String* uri);
		static UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Post(mscorlib::System::String* uri, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData);
		static void SetupPost(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* request, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData);
	};
}

