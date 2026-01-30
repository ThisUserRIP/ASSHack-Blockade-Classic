#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Mono_Security::Mono::Security::Interface { struct MonoRemoteCertificateValidationCallback; };
namespace Mono_Security::Mono::Security::Interface { struct MonoLocalCertificateSelectionCallback; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Mono_Security_Interface_TlsProtocols.h"
#include "Mono_Security_Interface_CipherSuiteCode.h"
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Interface
{
	struct MonoTlsSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField;
		Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField;
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> _CertificateValidationTime_k__BackingField;
		System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField;
		mscorlib::System::Object* _UserSettings_k__BackingField;
		IL2CPP::Array<mscorlib::System::String*>* _CertificateSearchPaths_k__BackingField;
		bool _SendCloseNotify_k__BackingField;
		mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> _EnabledProtocols_k__BackingField;
		IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>* _EnabledCiphers_k__BackingField;
		bool cloned;
		bool checkCertName;
		bool checkCertRevocationStatus;
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> useServicePointManagerCallback;
		bool skipSystemValidators;
		bool callbackNeedsChain;
		Mono_Security::Mono::Security::Interface::ICertificateValidator* certificateValidator;
		struct StaticFields
		{
			Mono_Security::Mono::Security::Interface::MonoTlsSettings* defaultSettings;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();
		void set_RemoteCertificateValidationCallback(Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);
		Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();
		void set_ClientCertificateSelectionCallback(Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> get_UseServicePointManagerCallback();
		void set_UseServicePointManagerCallback(mscorlib::System::Nullable_1<mscorlib::System::Boolean> value);
		bool get_CallbackNeedsCertificateChain();
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> get_CertificateValidationTime();
		void set_CertificateValidationTime(mscorlib::System::Nullable_1<mscorlib::System::DateTime> value);
		System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();
		void set_TrustAnchors(System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
		mscorlib::System::Object* get_UserSettings();
		void set_UserSettings(mscorlib::System::Object* value);
		IL2CPP::Array<mscorlib::System::String*>* get_CertificateSearchPaths();
		void set_CertificateSearchPaths(IL2CPP::Array<mscorlib::System::String*>* value);
		bool get_SendCloseNotify();
		void set_SendCloseNotify(bool value);
		mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();
		void set_EnabledProtocols(mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::TlsProtocols> value);
		IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>* get_EnabledCiphers();
		void set_EnabledCiphers(IL2CPP::Array<Mono_Security::Mono::Security::Interface::CipherSuiteCode>* value);
		void _ctor();
		static Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();
		static Mono_Security::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();
		Mono_Security::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(Mono_Security::Mono::Security::Interface::ICertificateValidator* validator);
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* Clone();
		void _ctor(Mono_Security::Mono::Security::Interface::MonoTlsSettings* other);
	};
}

