# Open5GS Kubernetes

### Namespace
: open5gs-k8s
```
$ kubectl apply -f 00_namespace.yaml
$ kubectl get ns

$ kubectl delete -f 00_namespace.yaml
```

### Mongodb
: Subscriber Data
< Address >
```
127.0.0.1
```

### MME (4G/5G NSA Core)
: Mobility Management Entity.
< Address >
```
MME-s1ap = 127.0.0.2 :36412 for S1-MME
MME-gtpc = 127.0.0.2 :2123  for S11
MME-frDi = 127.0.0.2 :3868  for S6a
```

### SGWC (4G/5G NSA Core)
: Serving Gateway Control Plane.
< Address >
```
SGWC-gtpc = 127.0.0.3 :2123 for S11
SGWC-pfcp = 127.0.0.3 :8805 for Sxa
```

### SMF (4G/5G NSA Core, 5G SA Core)
- PGWC(Packet Gateway Control Plane) component contained in Open5GS SMF
: Session Management Function.
< Address >
```
SMF-gtpc = 127.0.0.4 :2123 for S5c, N11
SMF-gtpu = 127.0.0.4 :2152 for N4u (Sxu)
SMF-pfcp = 127.0.0.4 :8805 for N4 (Sxb)
SMF-frDi = 127.0.0.4 :3868 for Gx auth
SMF-sbi  = 127.0.0.4 :7777 for 5G SBI (N7,N10,N11)
```

### AMF (5G SA Core)
: Access and Mobility Management Function.
< Address >
```
AMF-ngap = 127.0.0.5 :38412 for N2
AMF-sbi  = 127.0.0.5 :7777 for 5G SBI (N8,N12,N11)
```

### SGWU (4G/5G NSA Core)
: Serving Gateway User Plane.
< Address >
```
SGWU-pfcp = 127.0.0.6 :8805 for Sxa
SGWU-gtpu = 127.0.0.6 :2152 for S1-U, S5u
```

### UPF (4G/5G NSA Core, 5G SA Core)
- PGWU(Packet Gateway User Plane) component contained in Open5GS UPF
: User Plane Function.
< Address >
```
UPF-pfcp = 127.0.0.7 :8805 for N4 (Sxb)
UPF-gtpu = 127.0.0.7 :2152 for S5u, N3, N4u (Sxu)
```

### HSS (4G/5G NSA Core)
: Home Subscriber Server.
< Address >
```
HSS-frDi = 127.0.0.8 :3868 for S6a, Cx
```

### PCRF (4G/5G NSA Core)
: Policy and Charging Rules Function.
< Address >
```
PCRF-frDi = 127.0.0.9 :3868 for Gx
```

### NRF (5G SA Core)
: NF Repository Function.
< Address >
```
NRF-sbi  = 127.0.0.10:7777 for 5G SBI
```

### AUSF (5G SA Core)
: Authentication Server Function.
< Address >
```
AUSF-sbi = 127.0.0.11:7777 for 5G SBI
```

### UDM (5G SA Core)
: Unified Data Management.
< Address >
```
UDM-sbi = 127.0.0.12:7777 for 5G SBI
```

### PCF (5G SA Core)
: Policy and Charging Function.
< Address >
```
PCF-sbi = 127.0.0.13:7777 for 5G SBI
```

### NSSF (5G SA Core)
: Network Slice Selection Function.
< Address >
```
NSSF-sbi = 127.0.0.14:7777 for 5G SBI
```

### BSF (5G SA Core)
: Binding Support Function.
< Address >
```
BSF-sbi = 127.0.0.15:7777 for 5G SBI
```

### UDR (5G SA Core)
: Unified Data Repository.
< Address >
```
UDR-sbi = 127.0.0.20:7777 for 5G SBI
```

### WebUI
: ID/PW - admin/1423
```
http://localhost:3000
```
