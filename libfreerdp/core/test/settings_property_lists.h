#ifndef TEST_SETTINGS_PROPERTY_LISTS
#define TEST_SETTINGS_PROPERTY_LISTS

#define have_bool_list_indices
static const size_t bool_list_indices[] = {
	FreeRDP_AllowCacheWaitingList,
	FreeRDP_AllowDesktopComposition,
	FreeRDP_AllowFontSmoothing,
	FreeRDP_AllowUnanouncedOrdersFromServer,
	FreeRDP_AltSecFrameMarkerSupport,
	FreeRDP_AsyncChannels,
	FreeRDP_AsyncUpdate,
	FreeRDP_AudioCapture,
	FreeRDP_AudioPlayback,
	FreeRDP_Authentication,
	FreeRDP_AuthenticationOnly,
	FreeRDP_AutoAcceptCertificate,
	FreeRDP_AutoDenyCertificate,
	FreeRDP_AutoLogonEnabled,
	FreeRDP_AutoReconnectionEnabled,
	FreeRDP_BitmapCacheEnabled,
	FreeRDP_BitmapCachePersistEnabled,
	FreeRDP_BitmapCacheV3Enabled,
	FreeRDP_BitmapCompressionDisabled,
	FreeRDP_CertificateCallbackPreferPEM,
	FreeRDP_CertificateUseKnownHosts,
	FreeRDP_ColorPointerFlag,
	FreeRDP_CompressionEnabled,
	FreeRDP_ConsoleSession,
	FreeRDP_CredentialsFromStdin,
	FreeRDP_DeactivateClientDecoding,
	FreeRDP_Decorations,
	FreeRDP_DesktopResize,
	FreeRDP_DeviceRedirection,
	FreeRDP_DisableCredentialsDelegation,
	FreeRDP_DisableCtrlAltDel,
	FreeRDP_DisableCursorBlinking,
	FreeRDP_DisableCursorShadow,
	FreeRDP_DisableFullWindowDrag,
	FreeRDP_DisableMenuAnims,
	FreeRDP_DisableRemoteAppCapsCheck,
	FreeRDP_DisableThemes,
	FreeRDP_DisableWallpaper,
	FreeRDP_DrawAllowColorSubsampling,
	FreeRDP_DrawAllowDynamicColorFidelity,
	FreeRDP_DrawAllowSkipAlpha,
	FreeRDP_DrawGdiPlusCacheEnabled,
	FreeRDP_DrawGdiPlusEnabled,
	FreeRDP_DrawNineGridEnabled,
	FreeRDP_DumpRemoteFx,
	FreeRDP_DynamicDaylightTimeDisabled,
	FreeRDP_DynamicResolutionUpdate,
	FreeRDP_EmbeddedWindow,
	FreeRDP_EnableWindowsKey,
	FreeRDP_EncomspVirtualChannel,
	FreeRDP_ExtSecurity,
	FreeRDP_ExternalCertificateManagement,
	FreeRDP_FIPSMode,
	FreeRDP_FastPathInput,
	FreeRDP_FastPathOutput,
	FreeRDP_ForceEncryptedCsPdu,
	FreeRDP_ForceMultimon,
	FreeRDP_FrameMarkerCommandEnabled,
	FreeRDP_Fullscreen,
	FreeRDP_GatewayBypassLocal,
	FreeRDP_GatewayEnabled,
	FreeRDP_GatewayHttpTransport,
	FreeRDP_GatewayHttpUseWebsockets,
	FreeRDP_GatewayRpcTransport,
	FreeRDP_GatewayUdpTransport,
	FreeRDP_GatewayUseSameCredentials,
	FreeRDP_GfxAVC444,
	FreeRDP_GfxAVC444v2,
	FreeRDP_GfxH264,
	FreeRDP_GfxPlanar,
	FreeRDP_GfxProgressive,
	FreeRDP_GfxProgressiveV2,
	FreeRDP_GfxSendQoeAck,
	FreeRDP_GfxSmallCache,
	FreeRDP_GfxThinClient,
	FreeRDP_GrabKeyboard,
	FreeRDP_GrabMouse,
	FreeRDP_HasExtendedMouseEvent,
	FreeRDP_HasHorizontalWheel,
	FreeRDP_HasMonitorAttributes,
	FreeRDP_HiDefRemoteApp,
	FreeRDP_IPv6Enabled,
	FreeRDP_IgnoreCertificate,
	FreeRDP_JpegCodec,
	FreeRDP_ListMonitors,
	FreeRDP_LocalConnection,
	FreeRDP_LogonErrors,
	FreeRDP_LogonNotify,
	FreeRDP_LongCredentialsSupported,
	FreeRDP_LyncRdpMode,
	FreeRDP_MaximizeShell,
	FreeRDP_MouseAttached,
	FreeRDP_MouseHasWheel,
	FreeRDP_MouseMotion,
	FreeRDP_MouseUseRelativeMove,
	FreeRDP_MstscCookieMode,
	FreeRDP_MultiTouchGestures,
	FreeRDP_MultiTouchInput,
	FreeRDP_NSCodec,
	FreeRDP_NSCodecAllowDynamicColorFidelity,
	FreeRDP_NSCodecAllowSubsampling,
	FreeRDP_NegotiateSecurityLayer,
	FreeRDP_NetworkAutoDetect,
	FreeRDP_NlaSecurity,
	FreeRDP_NoBitmapCompressionHeader,
	FreeRDP_OldLicenseBehaviour,
	FreeRDP_PasswordIsSmartcardPin,
	FreeRDP_PercentScreenUseHeight,
	FreeRDP_PercentScreenUseWidth,
	FreeRDP_PlayRemoteFx,
	FreeRDP_PreferIPv6OverIPv4,
	FreeRDP_PrintReconnectCookie,
	FreeRDP_PromptForCredentials,
	FreeRDP_RdpSecurity,
	FreeRDP_RedirectClipboard,
	FreeRDP_RedirectDrives,
	FreeRDP_RedirectHomeDrive,
	FreeRDP_RedirectParallelPorts,
	FreeRDP_RedirectPrinters,
	FreeRDP_RedirectSerialPorts,
	FreeRDP_RedirectSmartCards,
	FreeRDP_RefreshRect,
	FreeRDP_RemdeskVirtualChannel,
	FreeRDP_RemoteAppLanguageBarSupported,
	FreeRDP_RemoteApplicationMode,
	FreeRDP_RemoteAssistanceMode,
	FreeRDP_RemoteAssistanceRequestControl,
	FreeRDP_RemoteConsoleAudio,
	FreeRDP_RemoteFxCodec,
	FreeRDP_RemoteFxImageCodec,
	FreeRDP_RemoteFxOnly,
	FreeRDP_RestrictedAdminModeRequired,
	FreeRDP_SaltedChecksum,
	FreeRDP_SendPreconnectionPdu,
	FreeRDP_ServerMode,
	FreeRDP_SmartSizing,
	FreeRDP_SmartcardEmulation,
	FreeRDP_SmartcardLogon,
	FreeRDP_SoftwareGdi,
	FreeRDP_SoundBeepsEnabled,
	FreeRDP_SpanMonitors,
	FreeRDP_SupportAsymetricKeys,
	FreeRDP_SupportDisplayControl,
	FreeRDP_SupportDynamicChannels,
	FreeRDP_SupportDynamicTimeZone,
	FreeRDP_SupportEchoChannel,
	FreeRDP_SupportErrorInfoPdu,
	FreeRDP_SupportGeometryTracking,
	FreeRDP_SupportGraphicsPipeline,
	FreeRDP_SupportHeartbeatPdu,
	FreeRDP_SupportMonitorLayoutPdu,
	FreeRDP_SupportMultitransport,
	FreeRDP_SupportSSHAgentChannel,
	FreeRDP_SupportStatusInfoPdu,
	FreeRDP_SupportVideoOptimized,
	FreeRDP_SuppressOutput,
	FreeRDP_SurfaceCommandsEnabled,
	FreeRDP_SurfaceFrameMarkerEnabled,
	FreeRDP_SuspendInput,
	FreeRDP_TcpKeepAlive,
	FreeRDP_TlsSecurity,
	FreeRDP_ToggleFullscreen,
	FreeRDP_TransportDump,
	FreeRDP_TransportDumpReplay,
	FreeRDP_UnicodeInput,
	FreeRDP_UnmapButtons,
	FreeRDP_UseMultimon,
	FreeRDP_UseRdpSecurityLayer,
	FreeRDP_UsingSavedCredentials,
	FreeRDP_VideoDisable,
	FreeRDP_VmConnectMode,
	FreeRDP_WaitForOutputBufferFlush,
	FreeRDP_Workarea,
};

#define have_uint16_list_indices
static const size_t uint16_list_indices[] = {
	FreeRDP_CapsGeneralCompressionLevel,
	FreeRDP_CapsGeneralCompressionTypes,
	FreeRDP_CapsProtocolVersion,
	FreeRDP_CapsRemoteUnshareFlag,
	FreeRDP_CapsUpdateCapabilityFlag,
	FreeRDP_DesktopOrientation,
	FreeRDP_ProxyPort,
	FreeRDP_TLSMaxVersion,
	FreeRDP_TLSMinVersion,
};

#define have_uint32_list_indices
static const size_t uint32_list_indices[] = {
	FreeRDP_AcceptedCertLength,
	FreeRDP_AuthenticationLevel,
	FreeRDP_AutoReconnectMaxRetries,
	FreeRDP_BitmapCacheV2NumCells,
	FreeRDP_BitmapCacheV3CodecId,
	FreeRDP_BitmapCacheVersion,
	FreeRDP_BrushSupportLevel,
	FreeRDP_ChannelCount,
	FreeRDP_ChannelDefArraySize,
	FreeRDP_ClientBuild,
	FreeRDP_ClientRandomLength,
	FreeRDP_ClientSessionId,
	FreeRDP_ClusterInfoFlags,
	FreeRDP_ColorDepth,
	FreeRDP_CompDeskSupportLevel,
	FreeRDP_CompressionLevel,
	FreeRDP_ConnectionType,
	FreeRDP_CookieMaxLength,
	FreeRDP_DesktopHeight,
	FreeRDP_DesktopPhysicalHeight,
	FreeRDP_DesktopPhysicalWidth,
	FreeRDP_DesktopPosX,
	FreeRDP_DesktopPosY,
	FreeRDP_DesktopScaleFactor,
	FreeRDP_DesktopWidth,
	FreeRDP_DeviceArraySize,
	FreeRDP_DeviceCount,
	FreeRDP_DeviceScaleFactor,
	FreeRDP_DrawNineGridCacheEntries,
	FreeRDP_DrawNineGridCacheSize,
	FreeRDP_DynamicChannelArraySize,
	FreeRDP_DynamicChannelCount,
	FreeRDP_EarlyCapabilityFlags,
	FreeRDP_EncryptionLevel,
	FreeRDP_EncryptionMethods,
	FreeRDP_ExtEncryptionMethods,
	FreeRDP_Floatbar,
	FreeRDP_FrameAcknowledge,
	FreeRDP_GatewayAcceptedCertLength,
	FreeRDP_GatewayCredentialsSource,
	FreeRDP_GatewayPort,
	FreeRDP_GatewayUsageMethod,
	FreeRDP_GfxCapsFilter,
	FreeRDP_GlyphSupportLevel,
	FreeRDP_JpegCodecId,
	FreeRDP_JpegQuality,
	FreeRDP_KeySpec,
	FreeRDP_KeyboardCodePage,
	FreeRDP_KeyboardFunctionKey,
	FreeRDP_KeyboardHook,
	FreeRDP_KeyboardLayout,
	FreeRDP_KeyboardSubType,
	FreeRDP_KeyboardType,
	FreeRDP_LargePointerFlag,
	FreeRDP_LoadBalanceInfoLength,
	FreeRDP_MaxTimeInCheckLoop,
	FreeRDP_MonitorAttributeFlags,
	FreeRDP_MonitorCount,
	FreeRDP_MonitorDefArraySize,
	FreeRDP_MonitorFlags,
	FreeRDP_MonitorLocalShiftX,
	FreeRDP_MonitorLocalShiftY,
	FreeRDP_MultifragMaxRequestSize,
	FreeRDP_MultitransportFlags,
	FreeRDP_NSCodecColorLossLevel,
	FreeRDP_NSCodecId,
	FreeRDP_NegotiationFlags,
	FreeRDP_NumMonitorIds,
	FreeRDP_OffscreenCacheEntries,
	FreeRDP_OffscreenCacheSize,
	FreeRDP_OffscreenSupportLevel,
	FreeRDP_OsMajorType,
	FreeRDP_OsMinorType,
	FreeRDP_Password51Length,
	FreeRDP_PduSource,
	FreeRDP_PercentScreen,
	FreeRDP_PerformanceFlags,
	FreeRDP_PointerCacheSize,
	FreeRDP_PreconnectionId,
	FreeRDP_ProxyType,
	FreeRDP_RdpVersion,
	FreeRDP_ReceivedCapabilitiesSize,
	FreeRDP_RedirectedSessionId,
	FreeRDP_RedirectionAcceptedCertLength,
	FreeRDP_RedirectionFlags,
	FreeRDP_RedirectionPasswordLength,
	FreeRDP_RedirectionPreferType,
	FreeRDP_RedirectionTsvUrlLength,
	FreeRDP_RemoteAppNumIconCacheEntries,
	FreeRDP_RemoteAppNumIconCaches,
	FreeRDP_RemoteApplicationExpandCmdLine,
	FreeRDP_RemoteApplicationExpandWorkingDir,
	FreeRDP_RemoteApplicationSupportLevel,
	FreeRDP_RemoteApplicationSupportMask,
	FreeRDP_RemoteFxCaptureFlags,
	FreeRDP_RemoteFxCodecId,
	FreeRDP_RemoteFxCodecMode,
	FreeRDP_RemoteWndSupportLevel,
	FreeRDP_RequestedProtocols,
	FreeRDP_SelectedProtocol,
	FreeRDP_ServerCertificateLength,
	FreeRDP_ServerPort,
	FreeRDP_ServerRandomLength,
	FreeRDP_ShareId,
	FreeRDP_SmartSizingHeight,
	FreeRDP_SmartSizingWidth,
	FreeRDP_StaticChannelArraySize,
	FreeRDP_StaticChannelCount,
	FreeRDP_TargetNetAddressCount,
	FreeRDP_TcpAckTimeout,
	FreeRDP_TcpConnectTimeout,
	FreeRDP_TcpKeepAliveDelay,
	FreeRDP_TcpKeepAliveInterval,
	FreeRDP_TcpKeepAliveRetries,
	FreeRDP_ThreadingFlags,
	FreeRDP_TlsSecLevel,
	FreeRDP_VirtualChannelChunkSize,
	FreeRDP_VirtualChannelCompressionFlags,
};

#define have_int32_list_indices
static const size_t int32_list_indices[] = {
	FreeRDP_XPan,
	FreeRDP_YPan,
};

#define have_uint64_list_indices
static const size_t uint64_list_indices[] = {
	FreeRDP_ParentWindowId,
};

#define have_string_list_indices
static const size_t string_list_indices[] = {
	FreeRDP_AcceptedCert,
	FreeRDP_ActionScript,
	FreeRDP_AllowedTlsCiphers,
	FreeRDP_AlternateShell,
	FreeRDP_AssistanceFile,
	FreeRDP_AuthenticationServiceClass,
	FreeRDP_BitmapCachePersistFile,
	FreeRDP_CardName,
	FreeRDP_CertificateAcceptedFingerprints,
	FreeRDP_CertificateContent,
	FreeRDP_CertificateFile,
	FreeRDP_CertificateName,
	FreeRDP_ClientAddress,
	FreeRDP_ClientDir,
	FreeRDP_ClientHostname,
	FreeRDP_ClientProductId,
	FreeRDP_ComputerName,
	FreeRDP_ConfigPath,
	FreeRDP_ConnectionFile,
	FreeRDP_ContainerName,
	FreeRDP_CspName,
	FreeRDP_CurrentPath,
	FreeRDP_Domain,
	FreeRDP_DrivesToRedirect,
	FreeRDP_DumpRemoteFxFile,
	FreeRDP_DynamicDSTTimeZoneKeyName,
	FreeRDP_GatewayAcceptedCert,
	FreeRDP_GatewayAccessToken,
	FreeRDP_GatewayDomain,
	FreeRDP_GatewayHostname,
	FreeRDP_GatewayPassword,
	FreeRDP_GatewayUsername,
	FreeRDP_HomePath,
	FreeRDP_ImeFileName,
	FreeRDP_KerberosArmor,
	FreeRDP_KerberosCache,
	FreeRDP_KerberosKdcUrl,
	FreeRDP_KerberosKeytab,
	FreeRDP_KerberosLifeTime,
	FreeRDP_KerberosRealm,
	FreeRDP_KerberosRenewableLifeTime,
	FreeRDP_KerberosStartTime,
	FreeRDP_KeyboardRemappingList,
	FreeRDP_NtlmSamFile,
	FreeRDP_Password,
	FreeRDP_PasswordHash,
	FreeRDP_Pkcs11Module,
	FreeRDP_PkinitAnchors,
	FreeRDP_PlayRemoteFxFile,
	FreeRDP_PreconnectionBlob,
	FreeRDP_PrivateKeyContent,
	FreeRDP_PrivateKeyFile,
	FreeRDP_ProxyHostname,
	FreeRDP_ProxyPassword,
	FreeRDP_ProxyUsername,
	FreeRDP_RDP2TCPArgs,
	FreeRDP_ReaderName,
	FreeRDP_RedirectionAcceptedCert,
	FreeRDP_RedirectionDomain,
	FreeRDP_RedirectionTargetFQDN,
	FreeRDP_RedirectionTargetNetBiosName,
	FreeRDP_RedirectionUsername,
	FreeRDP_RemoteApplicationCmdLine,
	FreeRDP_RemoteApplicationFile,
	FreeRDP_RemoteApplicationGuid,
	FreeRDP_RemoteApplicationIcon,
	FreeRDP_RemoteApplicationName,
	FreeRDP_RemoteApplicationProgram,
	FreeRDP_RemoteApplicationWorkingDir,
	FreeRDP_RemoteAssistancePassStub,
	FreeRDP_RemoteAssistancePassword,
	FreeRDP_RemoteAssistanceRCTicket,
	FreeRDP_RemoteAssistanceSessionId,
	FreeRDP_ServerHostname,
	FreeRDP_ShellWorkingDirectory,
	FreeRDP_SmartcardCertificate,
	FreeRDP_SmartcardPrivateKey,
	FreeRDP_SspiModule,
	FreeRDP_TargetNetAddress,
	FreeRDP_TlsSecretsFile,
	FreeRDP_TransportDumpFile,
	FreeRDP_Username,
	FreeRDP_WindowTitle,
	FreeRDP_WmClass,
};

#define have_pointer_list_indices
static const size_t pointer_list_indices[] = {
	FreeRDP_BitmapCacheV2CellInfo,
	FreeRDP_ChannelDefArray,
	FreeRDP_ClientAutoReconnectCookie,
	FreeRDP_ClientRandom,
	FreeRDP_ClientTimeZone,
	FreeRDP_DeviceArray,
	FreeRDP_DynamicChannelArray,
	FreeRDP_FragCache,
	FreeRDP_GlyphCache,
	FreeRDP_LoadBalanceInfo,
	FreeRDP_MonitorDefArray,
	FreeRDP_MonitorIds,
	FreeRDP_OrderSupport,
	FreeRDP_Password51,
	FreeRDP_RdpServerCertificate,
	FreeRDP_RdpServerRsaKey,
	FreeRDP_ReceivedCapabilities,
	FreeRDP_ReceivedCapabilityData,
	FreeRDP_ReceivedCapabilityDataSizes,
	FreeRDP_RedirectionPassword,
	FreeRDP_RedirectionTsvUrl,
	FreeRDP_ServerAutoReconnectCookie,
	FreeRDP_ServerCertificate,
	FreeRDP_ServerRandom,
	FreeRDP_StaticChannelArray,
	FreeRDP_TargetNetAddresses,
	FreeRDP_TargetNetPorts,
	FreeRDP_instance,
};

#endif /* TEST_SETTINGS_PROPERTY_LISTS */
